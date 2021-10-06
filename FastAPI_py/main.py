# pip install hypercorn for server
# pip install fastapi

# terminal: hypercorn main:app --reload

# FastAPI automatic generated documentation
# Swagger UI: url/docs
# url/redoc

#FastAPI created jason version of all data

from os import curdir
from fastapi import FastAPI
from pydantic import BaseModel
import requests

app = FastAPI()

db = []

class City(BaseModel):
    #set type for data
    name: str
    timezone: str

@app.get('/')
def index():
    return {'key': 'value'}

@app.get('/cities')
def get_cities():
    results = []
    for city in db:
        r = requests.get(f'http://worldtimeapi.org/api/timezone/{city["timezone"]}')
        current_time = r.json()['datetime']
        results.append({'name':city['name'], 'timezone':city['timezone'], 'current_time':current_time})
    return results

@app.get('/cities/{city_id}')
def get_city(city_id: int):
    city = db[city_id-1]
    r = requests.get(f'http://worldtimeapi.org/api/timezone/{city["timezone"]}')
    current_time = r.json()['datetime']
    return {'name':city['name'], 'timezone':city['timezone'], 'current_time':current_time}

@app.post('/cities')
def create_city(city: City):
    db.append(city.dict())
    return db[-1]


@app.delete('/cities/{city_id}')
def delete_city(city_id: int):
    db.pop(city_id-1)
    return {}
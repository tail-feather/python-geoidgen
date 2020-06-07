# python-geoidgen

Geoid generator using `GeographicLib::Geoid`

## Setup

1. Install GeographicLib
2. Install the geoid datasets
   <https://geographiclib.sourceforge.io/html/geoid.html>
3. `pip install -r requirements.txt`
4. `python setup.py install`

## Usage

```python
>>> import geoidgen
>>> geoid = geoidgen.Geoid("egm96-5")
>>> lat, lon = 36.104611, 140.084556
>>> geoid(lat, lon)
38.945466866766225
```

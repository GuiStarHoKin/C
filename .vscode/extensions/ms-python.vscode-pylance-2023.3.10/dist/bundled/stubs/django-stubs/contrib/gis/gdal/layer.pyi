from typing import Any

from django.contrib.gis.gdal.base import GDALBase as GDALBase

class Layer(GDALBase):
    ptr: Any = ...
    def __init__(self, layer_ptr: Any, ds: Any) -> None: ...
    def __getitem__(self, index: Any) -> Any: ...
    def __iter__(self) -> Any: ...
    def __len__(self) -> Any: ...
    @property
    def extent(self) -> Any: ...
    @property
    def name(self) -> Any: ...
    @property
    def num_fields(self) -> Any: ...
    @property
    def geom_type(self) -> Any: ...
    @property
    def srs(self) -> Any: ...
    @property
    def fields(self) -> Any: ...
    @property
    def field_types(self) -> Any: ...
    @property
    def field_widths(self) -> Any: ...
    @property
    def field_precisions(self) -> Any: ...
    spatial_filter: Any = ...
    def get_fields(self, field_name: Any) -> Any: ...
    def get_geoms(self, geos: bool = ...) -> Any: ...
    def test_capability(self, capability: Any) -> Any: ...
/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiUIView.h"
#import "Mapbox.h"

@interface ComPolancomediaMapboxView : TiUIView<RMMapViewDelegate> {
    
    RMMapView *mapView;
    
}

-(void)addAnnotation:(id)args;
-(void)addShape:(id)args;
-(void)clearTileCache:(id)args;
-(void)removeAnnotation:(id)args;
-(void)removeAllAnnotations:(id)args;

@end

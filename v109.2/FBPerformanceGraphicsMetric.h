/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPerformanceGraphMetricProvider.h>

@class CADisplayLink, NSMutableArray;

@interface FBPerformanceGraphicsMetric : NSObject <FBPerformanceGraphMetricProvider> {

	double _fps;
	double _lastFrameTimestamp;
	CADisplayLink* _displayLink;
	NSMutableArray* _history;

}
-(id)yAxisTitle;
-(id)yAxisUnit;
-(double)yMin;
-(double)yMax;
-(void)willBackground;
-(void)_updateWithDisplayLink:(id)arg1 ;
-(id)init;
-(id)title;
-(id)values;
-(double)updateInterval;
-(void)willForeground;
@end


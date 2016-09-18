/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

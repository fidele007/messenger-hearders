/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBQuickPerformanceLoggerProtocol.h>

@class NSString;

@interface FBQuickPerformanceLogger : NSObject <FBQuickPerformanceLoggerProtocol> {

	QuickPerformanceLogger* _qpLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLogger;
-(void)markerStart:(int)arg1 instanceKey:(int)arg2 ;
-(void)markerTag:(int)arg1 instanceKey:(int)arg2 tag:(id)arg3 ;
-(BOOL)isMarkerOn:(int)arg1 instanceKey:(int)arg2 ;
-(void)markerEnd:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3 ;
-(void)markerCancel:(int)arg1 instanceKey:(int)arg2 ;
-(void)markerNote:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3 tag:(id)arg4 ;
-(void)markerStart:(int)arg1 ;
-(void)markerTag:(int)arg1 tag:(id)arg2 ;
-(void)markerNote:(int)arg1 actionId:(short)arg2 ;
-(void)markerEnd:(int)arg1 actionId:(short)arg2 ;
-(BOOL)isMarkerOnAndSampled:(int)arg1 ;
-(void)markerAnnotate:(int)arg1 annotationKey:(id)arg2 annotationValue:(id)arg3 ;
-(void)markerCancel:(int)arg1 ;
-(void)annotateMarker:(int)arg1 withValues:(/*^block*/id)arg2 ;
-(void)markerNote:(int)arg1 actionId:(short)arg2 tag:(id)arg3 ;
-(BOOL)isMarkerOn:(int)arg1 ;
-(void)markerStart:(int)arg1 instanceKey:(int)arg2 monoTimestamp:(double)arg3 ;
-(void)markerEnd:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3 monoTimestamp:(double)arg4 ;
-(void)markerAnnotate:(int)arg1 instanceKey:(int)arg2 annotationKey:(id)arg3 annotationValue:(id)arg4 ;
-(BOOL)isMarkerOnAndSampled:(int)arg1 instanceKey:(int)arg2 ;
-(void)setMarkerParent:(int)arg1 parentMarkerID:(int)arg2 ;
-(BOOL)renameFromMarker:(int)arg1 withInstanceKey:(int)arg2 toMarkerId:(int)arg3 withInstanceKey:(int)arg4 ;
-(void)markerNote:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3 monoTimestamp:(double)arg4 ;
-(void)markerNote:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3 ;
-(void)markerAnnotate:(int)arg1 instanceKey:(int)arg2 annotationKey:(id)arg3 annotationValueBlock:(/*^block*/id)arg4 ;
-(void)annotateMarker:(int)arg1 instanceKey:(int)arg2 withValues:(/*^block*/id)arg3 ;
-(void)markerStart:(int)arg1 monoTimestamp:(double)arg2 ;
-(void)markerStart:(int)arg1 annotationKey:(id)arg2 annotationValue:(id)arg3 ;
-(void)markerStart:(int)arg1 instanceKey:(int)arg2 annotationKey:(id)arg3 annotationValue:(id)arg4 ;
-(void)markerStart:(int)arg1 instanceKey:(int)arg2 annotationKey:(id)arg3 annotationValue:(id)arg4 monoTimestamp:(double)arg5 ;
-(void)markersStart:(id)arg1 ;
-(void)markerAnnotate:(int)arg1 annotationKey:(id)arg2 annotationValueBlock:(/*^block*/id)arg3 ;
-(void)clearAllMarkers;
-(double)getMarkerStartTime:(int)arg1 ;
-(double)getMarkerStartTime:(int)arg1 instanceKey:(int)arg2 ;
-(void)markerTag:(int)arg1 tags:(id)arg2 ;
-(void)moduleTag:(short)arg1 tag:(id)arg2 ;
-(void)setAlwaysOnSampleRate:(int)arg1 sampleRate:(int)arg2 ;
-(void)clearAlwaysOnSampleRate:(int)arg1 ;
-(void)markerNote:(int)arg1 actionId:(short)arg2 annotationKey:(id)arg3 annotationValue:(id)arg4 ;
-(void)markerNote:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3 annotationKey:(id)arg4 annotationValue:(id)arg5 ;
-(void)markerNote:(int)arg1 instanceKey:(int)arg2 actionId:(short)arg3 annotationKey:(id)arg4 annotationValue:(id)arg5 monoTimestamp:(double)arg6 ;
-(void)markerNoteForMarkers:(id)arg1 actionId:(short)arg2 tag:(id)arg3 ;
-(void)markersEndWithActionId:(short)arg1 markers:(id)arg2 ;
-(void)markerNoteWithActionId:(short)arg1 tag:(id)arg2 markers:(id)arg3 ;
-(id)init;
@end

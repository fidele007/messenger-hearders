/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBThirdPartyTracker, NSError;

@interface FBNativeArticleTrackerState : NSObject {

	FBThirdPartyTracker* _tracker;
	double _startTime;
	double _progress;
	double _finishTime;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long status; 
@property (assign,nonatomic) double progress;                          //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double finishTime;                        //@synthesize finishTime=_finishTime - In the implementation block
@property (nonatomic,retain) NSError * error;                          //@synthesize error=_error - In the implementation block
-(double)finishTime;
-(id)analyticsOutputAtTime:(double)arg1 ;
-(id)initWithTracker:(id)arg1 startTime:(double)arg2 ;
-(id)analyticsOutput;
-(unsigned long long)type;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(unsigned long long)status;
-(void)setFinishTime:(double)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end


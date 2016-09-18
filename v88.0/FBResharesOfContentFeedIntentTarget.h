/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, FBMemFeedback;

@interface FBResharesOfContentFeedIntentTarget : FBIntentTarget {

	BOOL _hoistConnectedReshares;
	NSString* _feedbackID;

}

@property (nonatomic,readonly) FBMemFeedback * feedback; 
@property (nonatomic,copy,readonly) NSString * feedbackID;               //@synthesize feedbackID=_feedbackID - In the implementation block
@property (nonatomic,readonly) BOOL hoistConnectedReshares;              //@synthesize hoistConnectedReshares=_hoistConnectedReshares - In the implementation block
+(id)resharesOfContentFeedIntentTargetWithFeedbackID:(id)arg1 hoistConnectedReshares:(BOOL)arg2 ;
+(id)resharesOfContentFeedIntentTargetWithFeedback:(id)arg1 hoistConnectedReshares:(BOOL)arg2 ;
-(NSString *)feedbackID;
-(BOOL)hoistConnectedReshares;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBMemFeedback *)feedback;
@end


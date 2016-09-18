/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBListComponent, NSDictionary;

@interface FBListComponentTrackerState : NSObject {

	FBListComponent* _component;
	NSDictionary* _stateMap;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) FBListComponent * component;               //@synthesize component=_component - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stateMap;              //@synthesize stateMap=_stateMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(id)initWithComponent:(id)arg1 stateMap:(id)arg2 userInfo:(id)arg3 ;
-(NSDictionary *)stateMap;
-(NSDictionary *)userInfo;
-(FBListComponent *)component;
@end


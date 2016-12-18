/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedVideoChannelFieldsProtocol;
@class FBMemModelObject;

@interface FBVideoChannelViewControllerChannelConfig : NSObject {

	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _channel;
	long long _section;

}

@property (nonatomic,retain) FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> channel;              //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) long long section;                                                           //@synthesize section=_section - In the implementation block
-(id)initWithChannel:(id)arg1 section:(long long)arg2 ;
-(long long)section;
-(void)setSection:(long long)arg1 ;
-(void)setChannel:(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)arg1 ;
-(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)channel;
@end


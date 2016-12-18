/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBQueriedVideoChannelFieldsProtocol;
@class FBVideoHomeFollowAndSubscribeNotificationsButtons, FBMemModelObject, NSString, FBUserSession;

@interface FBVideoHomeFollowAndSubscribeNotificationsButtonsComponentView : UIView {

	FBVideoHomeFollowAndSubscribeNotificationsButtons* _button;
	BOOL _viewInvalidated;
	BOOL _darkBackground;
	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _videoChannel;
	NSString* _videoQLID;
	FBUserSession* _session;
	/*^block*/id _videoHomeSessionIDProvider;
	/*^block*/id _followStateToggledToBlock;
	/*^block*/id _notificationsStateToggledToBlock;

}

@property (nonatomic,retain) FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> videoChannel;              //@synthesize videoChannel=_videoChannel - In the implementation block
@property (nonatomic,copy) NSString * videoQLID;                                                               //@synthesize videoQLID=_videoQLID - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                          //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL darkBackground;                                                              //@synthesize darkBackground=_darkBackground - In the implementation block
@property (nonatomic,copy) id videoHomeSessionIDProvider;                                                      //@synthesize videoHomeSessionIDProvider=_videoHomeSessionIDProvider - In the implementation block
@property (nonatomic,copy) id followStateToggledToBlock;                                                       //@synthesize followStateToggledToBlock=_followStateToggledToBlock - In the implementation block
@property (nonatomic,copy) id notificationsStateToggledToBlock;                                                //@synthesize notificationsStateToggledToBlock=_notificationsStateToggledToBlock - In the implementation block
-(void)setVideoChannel:(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)arg1 ;
-(void)setDarkBackground:(BOOL)arg1 ;
-(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)videoChannel;
-(BOOL)darkBackground;
-(id)videoHomeSessionIDProvider;
-(void)setVideoHomeSessionIDProvider:(id)arg1 ;
-(NSString *)videoQLID;
-(void)setVideoQLID:(NSString *)arg1 ;
-(id)followStateToggledToBlock;
-(void)setFollowStateToggledToBlock:(id)arg1 ;
-(id)notificationsStateToggledToBlock;
-(void)setNotificationsStateToggledToBlock:(id)arg1 ;
-(void)layoutSubviews;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBVideoHomeLikeButton, FBMemPage, FBUserSession, NSArray;

@interface FBVideoHomeLikeButtonComponentView : UIView {

	FBVideoHomeLikeButton* _button;
	BOOL _viewInvalidated;
	FBMemPage* _page;
	FBUserSession* _session;
	/*^block*/id _stateToggledToBlock;
	NSArray* _trackingCodes;

}

@property (nonatomic,retain) FBMemPage * page;                     //@synthesize page=_page - In the implementation block
@property (nonatomic,retain) FBUserSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) id stateToggledToBlock;                 //@synthesize stateToggledToBlock=_stateToggledToBlock - In the implementation block
@property (nonatomic,copy) NSArray * trackingCodes;                //@synthesize trackingCodes=_trackingCodes - In the implementation block
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(id)stateToggledToBlock;
-(void)setStateToggledToBlock:(id)arg1 ;
-(NSArray *)trackingCodes;
-(void)layoutSubviews;
-(FBMemPage *)page;
-(void)setPage:(FBMemPage *)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBUserSession *)session;
@end


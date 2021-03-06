/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCommentUnhiderDelegate;
@class FBUserSession;

@interface FBCommentUnhider : NSObject {

	FBUserSession* _session;
	id<FBCommentUnhiderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCommentUnhiderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)unhideComment:(id)arg1 ;
-(void)setDelegate:(id<FBCommentUnhiderDelegate>)arg1 ;
-(id<FBCommentUnhiderDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end


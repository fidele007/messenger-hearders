/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCommentsModelControllerCoordinatorCountDecrementerDelegate;
@class FBUserSession, NSString, FBMemComment;

@interface FBCommentsModelControllerCoordinatorCountDecrementer : NSObject {

	FBUserSession* _session;
	NSString* _feedbackID;
	FBMemComment* _deletedComment;
	id<FBCommentsModelControllerCoordinatorCountDecrementerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCommentsModelControllerCoordinatorCountDecrementerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didRetrieveCommentCountDecrementedFeedback:(id)arg1 handle:(id)arg2 ;
-(id)initWithFeedbackID:(id)arg1 deletedComment:(id)arg2 session:(id)arg3 ;
-(void)decrementCommentCount;
-(void)setDelegate:(id<FBCommentsModelControllerCoordinatorCountDecrementerDelegate>)arg1 ;
-(id<FBCommentsModelControllerCoordinatorCountDecrementerDelegate>)delegate;
@end


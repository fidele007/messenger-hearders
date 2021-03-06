/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBTaglet.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBPhotoTaggableEdgeProtocol;
@class UITapGestureRecognizer, NSString;

@interface FBPhotoTaglet : FBTaglet <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapRecognizer;
	id<FBPhotoTaggableEdgeProtocol> _fbTaggableEdge;

}

@property (nonatomic,retain) id<FBPhotoTaggableEdgeProtocol> fbTaggableEdge;              //@synthesize fbTaggableEdge=_fbTaggableEdge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tagTextForTaggableEdge:(id)arg1 ;
+(id)tagDetailTextForTaggableEdge:(id)arg1 ;
-(void)onTap:(id)arg1 ;
-(void)onTapNoDelete:(id)arg1 ;
-(id<FBPhotoTaggableEdgeProtocol>)fbTaggableEdge;
-(id)initWithTaggableEdge:(id)arg1 showRemoveButton:(BOOL)arg2 delegate:(id)arg3 ;
-(void)setFbTaggableEdge:(id<FBPhotoTaggableEdgeProtocol>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)refresh;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichPhotoViewDelegate <NSObject>
@optional
-(void)didFinishLoadingPhotoView:(id)arg1;
-(void)photoViewWillBeginZoomingIn:(id)arg1;
-(void)photoViewDidZoom:(id)arg1;
-(void)photoViewDidZoomOut:(id)arg1;
-(void)photoViewWillStartPlaybackLivePhoto:(id)arg1;
-(void)photoViewDidEndPlaybackLivePhoto:(id)arg1;
-(BOOL)livePhotoPlaybackGestureShouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
-(void)photoView:(id)arg1 didTapFaceboxesEdge:(id)arg2;
-(void)photoViewDidStartTagging:(id)arg1;
-(void)photoViewWillFinishTagging:(id)arg1;
-(void)photoViewDidFinishTagging:(id)arg1;
-(void)photoViewDidSetTags:(id)arg1;
-(void)photoViewPhotoNoLongerAvailable:(id)arg1;
-(BOOL)photoView:(id)arg1 shouldShowTagGuideForUser:(id)arg2;
-(BOOL)photoViewCanShowNUX:(id)arg1;
-(id)passthroughViewsForFaceAlertsNUX;

@required
-(void)photoView:(id)arg1 didTapTagsEdge:(id)arg2;
-(id)photoTaggingSearchControllerForTarget:(id)arg1 ownerFBID:(id)arg2 actorFBID:(id)arg3;

@end


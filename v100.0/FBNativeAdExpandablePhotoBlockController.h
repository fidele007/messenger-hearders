/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBExpandablePhotoBlockController.h>

@protocol FBQueriedDocumentNativeAdBaseObjectFieldsProtocol;
@class FBUserSession, FBMemModelObject, FBRichStoryBlockDisplayContext, FBNativeArticleNativeAdIntentHandler, NSString, NSMutableDictionary;

@interface FBNativeAdExpandablePhotoBlockController : FBExpandablePhotoBlockController {

	FBUserSession* _session;
	FBMemModelObject*<FBQueriedDocumentNativeAdBaseObjectFieldsProtocol> _nativeAdObject;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBNativeArticleNativeAdIntentHandler* _intentHandler;
	NSString* _articleID;
	NSMutableDictionary* _perfAnalyticsInfo;
	double _adContentLoadingStartTime;
	BOOL _photoContentDisplayed;
	BOOL _needsToFirePerfEvent;
	mutex _asyncMutex;

}
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)annotationDictionaryForBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 ;
+(id)blockControllerClassesForAnnotationRegistry;
+(CGSize)mediaSizeForBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)_perfAnalyticsInfoForPresentationAttributes:(id)arg1 ;
+(double)_adContentLoadingStartTimeForPresentationAttributes:(id)arg1 ;
+(BOOL)_needsToLogImpressionForPresentationAttributes:(id)arg1 ;
-(void)handleIntent:(id)arg1 ;
-(void)didReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didGainInteractiveFocus;
-(void)didLoseInteractiveFocus;
-(void)interactivePhotoController:(id)arg1 didDisplayInitialPhoto:(id)arg2 ;
-(id)interactiveMediaNodeController;
-(id)initWithBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(BOOL)needsToFirePerfEvent;
-(void)setNeedsToFirePerfEvent:(BOOL)arg1 ;
-(void)_cleanupNativeAdPerfAnalyticValues;
-(void)_logNativeAdPerfAnalytics;
-(BOOL)isPhotoContentDisplayed;
-(void)setPhotoContentDisplayed:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewModelAdapter.h>

@protocol FBViewModelAdapterToolbox;
@class FBViewModelAdapterRegistry, FBMemComposedDocument, FBRichStoryPresentationState, FBRichStoryViewModel, NSString;

@interface FBRichStoryComposedDocumentAdapter : NSObject <FBViewModelAdapter> {

	FBViewModelAdapterRegistry* _adapterRegistry;
	FBMemComposedDocument* _composedDocument;
	FBRichStoryPresentationState* _presentationState;
	FBRichStoryViewModel* _story;
	id<FBViewModelAdapterToolbox> _toolbox;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
+(id)baseStyleSheet;
-(void)_generateViewModelIfNecessary;
-(id)initWithComposedDocument:(id)arg1 toolbox:(id)arg2 ;
-(id)viewModel;
-(id)presentationState;
@end


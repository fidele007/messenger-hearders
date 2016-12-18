/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDocumentElementStoryBlockAdapter.h>

@protocol FBQueriedDocumentElementFieldsProtocol;
@class FBRichStoryEntityBlock, FBMemModelObject, NSDictionary;

@interface FBNativeAdElementStoryBlockAdapter : FBDocumentElementStoryBlockAdapter {

	FBRichStoryEntityBlock* _block;
	FBMemModelObject*<FBQueriedDocumentElementFieldsProtocol> _nativeAdElement;
	NSDictionary* _presentationAttributes;

}
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(id)initWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(id)viewModel;
-(id)presentationAttributes;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDocumentElementStoryBlockAdapter.h>

@class FBRichStoryTextBlock, FBMemDocumentTextElement, NSDictionary, FBComposedBlockStoryBlockAdapter;

@interface FBTextElementStoryBlockAdapter : FBDocumentElementStoryBlockAdapter {

	FBRichStoryTextBlock* _storyBlock;
	FBMemDocumentTextElement* _textElement;
	NSDictionary* _presentationAttributes;
	FBComposedBlockStoryBlockAdapter* _textContentAdapter;

}

@property (nonatomic,readonly) FBRichStoryTextBlock * storyBlock; 
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(void)setLayoutDirection:(long long)arg1 ;
-(FBRichStoryTextBlock *)storyBlock;
-(id)attributionBlock;
-(id)initWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(BOOL)hasAttribution;
-(id)viewModel;
-(long long)layoutDirection;
-(id)presentationAttributes;
@end


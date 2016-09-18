/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryLayoutDescriptionGenerator.h>

@class FBNativeArticleElementPaddingMetrics, PAInterfaceGuide, NSString;

@interface FBNativeArticleLayout : NSObject <FBRichStoryLayoutDescriptionGenerator> {

	FBNativeArticleElementPaddingMetrics* _elementMetrics;
	PAInterfaceGuide* _interfaceGuide;
	long long _layoutDirection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_blockAnnotationsAreOverlaid:(id)arg1 presentationAttributes:(id)arg2 ;
-(id)layoutDescriptionForViewModel:(id)arg1 presentationState:(id)arg2 displayContext:(id)arg3 ;
-(id)layoutDescriptionFromLayoutDescription:(id)arg1 withUpdatedBlock:(id)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(id)_elementDescriptorForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 elementMetrics:(id)arg4 ;
-(id)_elementDescriptorForTextBlock:(id)arg1 metrics:(id)arg2 presentationAttributes:(id)arg3 styleSheet:(id)arg4 ;
-(id)_elementDescriptorForEntityBlock:(id)arg1 metrics:(id)arg2 presentationAttributes:(id)arg3 styleSheet:(id)arg4 ;
-(id)_elementDescriptorForGroupBlock:(id)arg1 metrics:(id)arg2 presentationAttributes:(id)arg3 ;
-(id)_elementDescriptorForEventCollectionBlock:(id)arg1 metrics:(id)arg2 presentationAttributes:(id)arg3 ;
-(BOOL)_flipLayoutDirection;
-(id)initWithInterfaceGuide:(id)arg1 layoutDirection:(long long)arg2 ;
@end


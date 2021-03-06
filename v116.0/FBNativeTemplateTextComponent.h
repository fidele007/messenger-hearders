/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NTNativeTemplateComponent.h>

@class NSDictionary, FBNativeTemplateBaseContext, FBNativeTemplateTruncationAwareTextComponent, NSArray, FBRichTextComponent;

@interface FBNativeTemplateTextComponent : NTNativeTemplateComponent {

	NSDictionary* _genericHelpers;
	FBNativeTemplateBaseContext* _context;
	FBNativeTemplateTruncationAwareTextComponent* _truncationAwareTextComponent;
	FBNativeTemplateTextComponentOptions _options;
	NSArray* _imageProviders;
	NSArray* _imageProvidersToRetrieveFrom;

}

@property (nonatomic,copy,readonly) NSArray * imageProvidersToRetrieveFrom;              //@synthesize imageProvidersToRetrieveFrom=_imageProvidersToRetrieveFrom - In the implementation block
@property (nonatomic,readonly) BOOL isTextTruncated; 
@property (nonatomic,readonly) FBRichTextComponent * richTextComponent; 
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
+(id)newWithModel:(id)arg1 attributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg2 options:(const FBNativeTemplateTextComponentOptions*)arg3 context:(id)arg4 ;
-(void)didTapView;
-(BOOL)isTextTruncated;
-(FBRichTextComponent *)richTextComponent;
-(void)didTapRichText:(id)arg1 context:(id)arg2 ;
-(NSArray *)imageProvidersToRetrieveFrom;
@end


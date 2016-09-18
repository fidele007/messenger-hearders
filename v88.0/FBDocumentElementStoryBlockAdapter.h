/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryBlockAdapter.h>

@protocol FBQueriedDocumentElementFieldsProtocol;
@class NSDictionary, FBMemModelObject, FBRichStoryAdapterToolbox, NSString;

@interface FBDocumentElementStoryBlockAdapter : NSObject <FBRichStoryBlockAdapter> {

	NSDictionary* _annotations;
	FBMemModelObject*<FBQueriedDocumentElementFieldsProtocol> _documentElement;
	BOOL _supportsSharing;
	long long _layoutDirection;
	NSDictionary* _presentationAttributes;
	FBRichStoryAdapterToolbox* _toolbox;

}

@property (assign,nonatomic) long long layoutDirection;                                 //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * presentationAttributes;              //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
@property (assign,nonatomic) BOOL supportsSharing;                                      //@synthesize supportsSharing=_supportsSharing - In the implementation block
@property (nonatomic,readonly) FBRichStoryAdapterToolbox * toolbox;                     //@synthesize toolbox=_toolbox - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(FBRichStoryAdapterToolbox *)toolbox;
-(void)setLayoutDirection:(long long)arg1 ;
-(id)initWithDocumentElement:(id)arg1 toolbox:(id)arg2 ;
-(id)viewModel;
-(id)annotations;
-(long long)layoutDirection;
-(NSDictionary *)presentationAttributes;
-(void)setSupportsSharing:(BOOL)arg1 ;
-(BOOL)supportsSharing;
@end


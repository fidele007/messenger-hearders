/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDocumentElementStoryBlockAdapter.h>

@protocol FBQueriedDocumentElementFieldsProtocol;
@class FBMemModelObject, NSDictionary;

@interface FBMediaElementStoryBlockAdapter : FBDocumentElementStoryBlockAdapter {

	FBMemModelObject*<FBQueriedDocumentElementFieldsProtocol> _mediaElement;
	NSDictionary* _presentationAttributes;
	BOOL _supportsFeedback;

}

@property (assign,nonatomic) BOOL supportsFeedback;              //@synthesize supportsFeedback=_supportsFeedback - In the implementation block
+(BOOL)canAdaptDataModel:(id)arg1 ;
-(void)setSupportsFeedback:(BOOL)arg1 ;
-(id)initWithMediaElement:(id)arg1 toolbox:(id)arg2 ;
-(BOOL)supportsFeedback;
-(id)annotations;
-(id)presentationAttributes;
@end


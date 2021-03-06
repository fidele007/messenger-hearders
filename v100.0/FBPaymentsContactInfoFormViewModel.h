/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray;

@interface FBPaymentsContactInfoFormViewModel : FBValueObject <NSCopying> {

	NSString* _navigationBarTitle;
	NSString* _deleteButtonTitle;
	NSString* _makeAsDefaultSectionFooterText;
	NSDictionary* _formIdentifierMap;
	NSArray* _formCellLayoutDefinition;

}

@property (nonatomic,copy,readonly) NSString * navigationBarTitle;                          //@synthesize navigationBarTitle=_navigationBarTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * deleteButtonTitle;                           //@synthesize deleteButtonTitle=_deleteButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * makeAsDefaultSectionFooterText;              //@synthesize makeAsDefaultSectionFooterText=_makeAsDefaultSectionFooterText - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * formIdentifierMap;                       //@synthesize formIdentifierMap=_formIdentifierMap - In the implementation block
@property (nonatomic,copy,readonly) NSArray * formCellLayoutDefinition;                     //@synthesize formCellLayoutDefinition=_formCellLayoutDefinition - In the implementation block
-(id)initWithNavigationBarTitle:(id)arg1 deleteButtonTitle:(id)arg2 makeAsDefaultSectionFooterText:(id)arg3 formIdentifierMap:(id)arg4 formCellLayoutDefinition:(id)arg5 ;
-(NSString *)deleteButtonTitle;
-(NSString *)makeAsDefaultSectionFooterText;
-(NSDictionary *)formIdentifierMap;
-(NSArray *)formCellLayoutDefinition;
-(NSString *)navigationBarTitle;
@end


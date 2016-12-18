/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface MNGetQuoteFieldModel : FBValueObject <NSCopying> {

	NSString* _fieldType;
	NSString* _fieldTitle;
	NSArray* _fieldValues;

}

@property (nonatomic,copy,readonly) NSString * fieldType;               //@synthesize fieldType=_fieldType - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldTitle;              //@synthesize fieldTitle=_fieldTitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fieldValues;              //@synthesize fieldValues=_fieldValues - In the implementation block
-(NSString *)fieldTitle;
-(id)initWithFieldType:(id)arg1 fieldTitle:(id)arg2 fieldValues:(id)arg3 ;
-(NSArray *)fieldValues;
-(NSString *)fieldType;
@end


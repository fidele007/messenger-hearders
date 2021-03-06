/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MNImportedContactCard : NSObject <NSCopying> {

	NSArray* _contexts;
	NSString* _mainActionTitle;
	NSString* _partOfTitleToBold;
	NSString* _primaryAuxiliaryActionTitle;
	NSString* _userId;
	NSString* _secondaryAuxiliaryActionTitle;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSArray * contexts;                                    //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,copy,readonly) NSString * mainActionTitle;                            //@synthesize mainActionTitle=_mainActionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * partOfTitleToBold;                          //@synthesize partOfTitleToBold=_partOfTitleToBold - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryAuxiliaryActionTitle;                //@synthesize primaryAuxiliaryActionTitle=_primaryAuxiliaryActionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                                     //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryAuxiliaryActionTitle;              //@synthesize secondaryAuxiliaryActionTitle=_secondaryAuxiliaryActionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                      //@synthesize title=_title - In the implementation block
-(NSString *)partOfTitleToBold;
-(NSString *)mainActionTitle;
-(NSString *)primaryAuxiliaryActionTitle;
-(NSString *)secondaryAuxiliaryActionTitle;
-(id)initWithTitle:(id)arg1 partOfTitleToBold:(id)arg2 userId:(id)arg3 mainActionTitle:(id)arg4 primaryAuxiliaryActionTitle:(id)arg5 secondaryAuxiliaryActionTitle:(id)arg6 contexts:(id)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)contexts;
-(NSString *)userId;
@end


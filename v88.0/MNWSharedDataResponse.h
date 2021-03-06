/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNWSharedDataType, NSObject;

@interface MNWSharedDataResponse : FBValueObject <NSCopying, NSCoding> {

	MNWSharedDataType* _dataType;
	NSObject* _dataObject;

}

@property (nonatomic,copy,readonly) MNWSharedDataType * dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,copy,readonly) NSObject * dataObject;                     //@synthesize dataObject=_dataObject - In the implementation block
-(id)initWithDataType:(id)arg1 dataObject:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MNWSharedDataType *)dataType;
-(NSObject *)dataObject;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedFeedUnitFieldsProtocol;
@class FBMemModelObject;

@interface FBFeedSecondaryActionButtonTapInfo : NSObject {

	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _unit;
	id _element;

}

@property (nonatomic,readonly) FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> unit;              //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) id element;                                                           //@synthesize element=_element - In the implementation block
+(id)newWithUnit:(id)arg1 element:(id)arg2 ;
-(id)initWithUnit:(id)arg1 element:(id)arg2 ;
-(id)element;
-(FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol>)unit;
@end

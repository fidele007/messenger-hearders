/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosRtcVideoExpressionUniverseExperimentContext : FBExperimentContext {

	BOOL _expression_enabled;
	BOOL _has_msqrd;
	long long _predownload_model;
	BOOL _vch_entry_point;
	BOOL _check_remote_gk;
	long long _masks_version;

}

@property (assign,nonatomic) BOOL expression_enabled;                  //@synthesize expression_enabled=_expression_enabled - In the implementation block
@property (assign,nonatomic) BOOL has_msqrd;                           //@synthesize has_msqrd=_has_msqrd - In the implementation block
@property (assign,nonatomic) long long predownload_model;              //@synthesize predownload_model=_predownload_model - In the implementation block
@property (assign,nonatomic) BOOL vch_entry_point;                     //@synthesize vch_entry_point=_vch_entry_point - In the implementation block
@property (assign,nonatomic) BOOL check_remote_gk;                     //@synthesize check_remote_gk=_check_remote_gk - In the implementation block
@property (assign,nonatomic) long long masks_version;                  //@synthesize masks_version=_masks_version - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)check_remote_gk;
-(BOOL)expression_enabled;
-(BOOL)has_msqrd;
-(long long)masks_version;
-(long long)predownload_model;
-(BOOL)vch_entry_point;
-(void)setExpression_enabled:(BOOL)arg1 ;
-(void)setHas_msqrd:(BOOL)arg1 ;
-(void)setPredownload_model:(long long)arg1 ;
-(void)setVch_entry_point:(BOOL)arg1 ;
-(void)setCheck_remote_gk:(BOOL)arg1 ;
-(void)setMasks_version:(long long)arg1 ;
@end


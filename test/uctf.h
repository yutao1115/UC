/**
 * Copyright(c) 2010 Cnangel, All Rights Reserved.
 * 
 * @file uctf.h
 * @details uc test
 * @author cnangel
 * @version 1.0.0
 * @date 2010/01/06 23:51:34
 */

#ifndef __UC_UCTF_H__
#define __UC_UCTF_H__

#include <cppunit/extensions/HelperMacros.h>

extern "C" {
#include <uc.h>
}

namespace uc
{
	class UCTF : public CppUnit::TestFixture {

		CPPUNIT_TEST_SUITE(UCTF);
		CPPUNIT_TEST(testInit);
		CPPUNIT_TEST_SUITE_END();

		public:
		void setUp();
		void tearDown();
		void testInit();
	};
};

#endif 

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */


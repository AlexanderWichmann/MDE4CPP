#ifndef UTIL_STEREOTYPESTORAGE_HPP
#define UTIL_STEREOTYPESTORAGE_HPP

#ifdef NDEBUG
#define DEBUG_MESSAGE(a) /**/
#else
#define DEBUG_MESSAGE(a) a
#endif

#include <map>
#include <string>

#include "abstractDataTypes/SubsetUnion.hpp"
#include "uml/Stereotype.hpp"

namespace util
{
	class StereotypeStorage
	{
		public:
			static StereotypeStorage* eInstance();

			void applyStereotype(uml::Element* _element, std::shared_ptr<uml::Stereotype> stereotype);
			std::shared_ptr<uml::Stereotype> getAppliedStereotype(uml::Element * _element, std::string qualifiedName);
			std::shared_ptr<Bag<uml::Stereotype>> getAppliedStereotypes(uml::Element * _element);
			bool isStereotypeApplied(uml::Element * _element, std::shared_ptr<uml::Stereotype> _stereotype);
			void unapplyStereotype(uml::Element * _element, std::shared_ptr<uml::Stereotype> _stereotype);

		private:
			StereotypeStorage();

			static StereotypeStorage * m_instance;
			std::map<uml::Element *, std::shared_ptr<Bag<uml::Stereotype>>> m_stereotypeApplicationMap;
	};
}
#endif
